// fichero 48521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48521;

Registro48521 crear_registro48521(int id) {
    Registro48521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
