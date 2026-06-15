// fichero 46805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46805;

Registro46805 crear_registro46805(int id) {
    Registro46805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
