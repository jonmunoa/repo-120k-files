// fichero 10589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10589;

Registro10589 crear_registro10589(int id) {
    Registro10589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
