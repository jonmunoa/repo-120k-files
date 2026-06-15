// fichero 4813 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4813;

Registro4813 crear_registro4813(int id) {
    Registro4813 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
