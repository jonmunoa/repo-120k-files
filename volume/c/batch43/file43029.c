// fichero 43029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43029;

Registro43029 crear_registro43029(int id) {
    Registro43029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
