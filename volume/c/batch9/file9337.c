// fichero 9337 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9337;

Registro9337 crear_registro9337(int id) {
    Registro9337 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
