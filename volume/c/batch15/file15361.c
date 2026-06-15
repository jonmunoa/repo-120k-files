// fichero 15361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15361;

Registro15361 crear_registro15361(int id) {
    Registro15361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
