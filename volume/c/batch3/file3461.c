// fichero 3461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3461;

Registro3461 crear_registro3461(int id) {
    Registro3461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
