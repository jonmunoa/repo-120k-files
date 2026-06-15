// fichero 32689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32689;

Registro32689 crear_registro32689(int id) {
    Registro32689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
