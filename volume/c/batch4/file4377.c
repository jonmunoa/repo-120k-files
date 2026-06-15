// fichero 4377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4377;

Registro4377 crear_registro4377(int id) {
    Registro4377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
