// fichero 43845 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43845;

Registro43845 crear_registro43845(int id) {
    Registro43845 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
