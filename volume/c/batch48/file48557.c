// fichero 48557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48557;

Registro48557 crear_registro48557(int id) {
    Registro48557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
