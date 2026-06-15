// fichero 9213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9213;

Registro9213 crear_registro9213(int id) {
    Registro9213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
