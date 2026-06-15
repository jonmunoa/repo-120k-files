// fichero 46661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46661;

Registro46661 crear_registro46661(int id) {
    Registro46661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
