// fichero 26269 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26269;

Registro26269 crear_registro26269(int id) {
    Registro26269 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
