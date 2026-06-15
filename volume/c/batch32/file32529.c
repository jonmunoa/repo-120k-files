// fichero 32529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32529;

Registro32529 crear_registro32529(int id) {
    Registro32529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
