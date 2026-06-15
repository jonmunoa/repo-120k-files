// fichero 15321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15321;

Registro15321 crear_registro15321(int id) {
    Registro15321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
