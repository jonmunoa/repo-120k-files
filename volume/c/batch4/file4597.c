// fichero 4597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4597;

Registro4597 crear_registro4597(int id) {
    Registro4597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
