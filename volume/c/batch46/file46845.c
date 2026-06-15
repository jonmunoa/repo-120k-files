// fichero 46845 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46845;

Registro46845 crear_registro46845(int id) {
    Registro46845 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
