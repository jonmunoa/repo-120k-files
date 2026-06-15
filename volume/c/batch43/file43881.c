// fichero 43881 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43881;

Registro43881 crear_registro43881(int id) {
    Registro43881 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
