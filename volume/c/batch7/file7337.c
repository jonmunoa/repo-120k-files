// fichero 7337 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7337;

Registro7337 crear_registro7337(int id) {
    Registro7337 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
