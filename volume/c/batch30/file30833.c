// fichero 30833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30833;

Registro30833 crear_registro30833(int id) {
    Registro30833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
