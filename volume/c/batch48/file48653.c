// fichero 48653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48653;

Registro48653 crear_registro48653(int id) {
    Registro48653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
