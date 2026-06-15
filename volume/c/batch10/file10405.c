// fichero 10405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10405;

Registro10405 crear_registro10405(int id) {
    Registro10405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
