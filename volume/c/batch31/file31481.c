// fichero 31481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31481;

Registro31481 crear_registro31481(int id) {
    Registro31481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
