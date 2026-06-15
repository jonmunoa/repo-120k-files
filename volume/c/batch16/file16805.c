// fichero 16805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16805;

Registro16805 crear_registro16805(int id) {
    Registro16805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
