from flask import Flask, request, jsonify, Blueprint
from flask_sqlalchemy import SQLAlchemy
from .models import employee
from . import db

employee_bp=Blueprint('employee_bp', __name__)

@employee_bp.route('/')
def index():
    return 'WELCOME TO EMPLOYEE MANAGEMENT SYSTEM'

@employee_bp.route('/emp', methods=['POST'])
def create():
    data=request.get_json()
    emp=employee(id=data['id'], name=data['name'], age=data['age'], department=data['dept'])
    db.session.add(emp)
    db.session.commit()
    return jsonify({'message':'employee added successfully!!'})

@employee_bp.route('/emp', methods=['GET'])
def get_emp():
    emp_dat = employee.query.all()
    output = []
    for i in emp_dat:
        emp_data={'id=':i.id, 'name=':i.name, 'age=':i.age, 'department=':i.department}
        output.append(emp_data)
    return jsonify({'employees:':output})
@employee_bp.route('/emp<int:id>', methods=['PUT'])
def update_emp(id):
    data=request.get_json()
    emp_dat=employee.query.get_or_404(id)
    emp_dat.name=data['name']
    emp_dat.age=data['age']
    emp_dat.department=data['dept']
    db.session.commit()
    return jsonify({'employee': 'employee data updated!!'})

@employee_bp.route('/emp<int:id>', methods=['DELETE'])
def delete_employee(id):
    emp_data =employee.query.get_or_404(id)
    db.session.delete(emp_data)
    db.session.commit()
    return jsonify({'message': 'Employee deleted'})