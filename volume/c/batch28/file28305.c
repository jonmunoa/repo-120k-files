// fichero 28305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28305;

Registro28305 crear_registro28305(int id) {
    Registro28305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
