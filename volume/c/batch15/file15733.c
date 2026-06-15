// fichero 15733 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15733;

Registro15733 crear_registro15733(int id) {
    Registro15733 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
