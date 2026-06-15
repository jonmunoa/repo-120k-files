// fichero 48245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48245;

Registro48245 crear_registro48245(int id) {
    Registro48245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
