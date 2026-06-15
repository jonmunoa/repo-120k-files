// fichero 48857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48857;

Registro48857 crear_registro48857(int id) {
    Registro48857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
