// fichero 5337 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5337;

Registro5337 crear_registro5337(int id) {
    Registro5337 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
