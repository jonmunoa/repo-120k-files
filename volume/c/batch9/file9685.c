// fichero 9685 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9685;

Registro9685 crear_registro9685(int id) {
    Registro9685 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
