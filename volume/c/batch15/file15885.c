// fichero 15885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15885;

Registro15885 crear_registro15885(int id) {
    Registro15885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
