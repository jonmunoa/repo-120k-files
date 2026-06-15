// fichero 2629 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2629;

Registro2629 crear_registro2629(int id) {
    Registro2629 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
