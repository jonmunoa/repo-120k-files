// fichero 43417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43417;

Registro43417 crear_registro43417(int id) {
    Registro43417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
