node{
    stage('CLONE'){
        sh 'rm -rf *'
        git 'https://github.com/PorinKEK/test.git'
        sh '''mkdir build 
cd build
cmake ..'''
    }
    stage('COMPILE'){
        sh 'cd build && make '
    }
    stage('RUN'){
        sh 'cd build && ./app/mainapp/main && n'
    }
}