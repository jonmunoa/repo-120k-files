// fichero 46757 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46757;

Registro46757 crear_registro46757(int id) {
    Registro46757 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
