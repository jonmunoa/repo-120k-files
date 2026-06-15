// fichero 4573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4573;

Registro4573 crear_registro4573(int id) {
    Registro4573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
