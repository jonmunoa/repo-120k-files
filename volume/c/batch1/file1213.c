// fichero 1213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1213;

Registro1213 crear_registro1213(int id) {
    Registro1213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
