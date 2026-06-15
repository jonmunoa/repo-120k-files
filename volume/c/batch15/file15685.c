// fichero 15685 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15685;

Registro15685 crear_registro15685(int id) {
    Registro15685 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
