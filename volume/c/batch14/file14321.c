// fichero 14321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14321;

Registro14321 crear_registro14321(int id) {
    Registro14321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
