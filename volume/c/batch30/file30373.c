// fichero 30373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30373;

Registro30373 crear_registro30373(int id) {
    Registro30373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
