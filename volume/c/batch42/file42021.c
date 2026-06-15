// fichero 42021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42021;

Registro42021 crear_registro42021(int id) {
    Registro42021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
