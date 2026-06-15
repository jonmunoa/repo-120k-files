// fichero 48885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48885;

Registro48885 crear_registro48885(int id) {
    Registro48885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
