// fichero 43885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43885;

Registro43885 crear_registro43885(int id) {
    Registro43885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
