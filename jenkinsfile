pipeline {
    agent any

    stages {
        stage('Checkout') {
            steps {
                echo 'GitHub source code checked out by Jenkins'
            }
        }

        stage('Build C Program') {
            steps {
                sh 'gcc --version'
                sh 'gcc hello.c -o studentapp'
            }
        }

        stage('Run Application') {
            steps {
                sh 'echo "Student Management System build successful"'
            }
        }
    }
}
