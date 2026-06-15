// fichero 4213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4213;

Registro4213 crear_registro4213(int id) {
    Registro4213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
