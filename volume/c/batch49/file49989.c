// fichero 49989 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49989;

Registro49989 crear_registro49989(int id) {
    Registro49989 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
