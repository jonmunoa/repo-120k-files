// fichero 30413 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30413;

Registro30413 crear_registro30413(int id) {
    Registro30413 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
