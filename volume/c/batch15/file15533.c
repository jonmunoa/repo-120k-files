// fichero 15533 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15533;

Registro15533 crear_registro15533(int id) {
    Registro15533 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
