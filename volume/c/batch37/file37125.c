// fichero 37125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37125;

Registro37125 crear_registro37125(int id) {
    Registro37125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
