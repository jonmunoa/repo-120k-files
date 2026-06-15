// fichero 49837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49837;

Registro49837 crear_registro49837(int id) {
    Registro49837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
