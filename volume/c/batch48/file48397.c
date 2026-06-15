// fichero 48397 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48397;

Registro48397 crear_registro48397(int id) {
    Registro48397 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
