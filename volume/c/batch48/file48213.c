// fichero 48213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48213;

Registro48213 crear_registro48213(int id) {
    Registro48213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
