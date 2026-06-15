// fichero 26089 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26089;

Registro26089 crear_registro26089(int id) {
    Registro26089 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
