// fichero 2069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2069;

Registro2069 crear_registro2069(int id) {
    Registro2069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
