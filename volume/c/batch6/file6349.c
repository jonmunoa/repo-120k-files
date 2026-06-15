// fichero 6349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6349;

Registro6349 crear_registro6349(int id) {
    Registro6349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
