// fichero 23405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23405;

Registro23405 crear_registro23405(int id) {
    Registro23405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
