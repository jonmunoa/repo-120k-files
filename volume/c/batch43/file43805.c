// fichero 43805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43805;

Registro43805 crear_registro43805(int id) {
    Registro43805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
