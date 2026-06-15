// fichero 48797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48797;

Registro48797 crear_registro48797(int id) {
    Registro48797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
