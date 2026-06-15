// fichero 42805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42805;

Registro42805 crear_registro42805(int id) {
    Registro42805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
