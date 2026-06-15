// fichero 48761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48761;

Registro48761 crear_registro48761(int id) {
    Registro48761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
