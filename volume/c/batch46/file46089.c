// fichero 46089 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46089;

Registro46089 crear_registro46089(int id) {
    Registro46089 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
