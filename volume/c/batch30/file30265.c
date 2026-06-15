// fichero 30265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30265;

Registro30265 crear_registro30265(int id) {
    Registro30265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
