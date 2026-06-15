// fichero 33797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33797;

Registro33797 crear_registro33797(int id) {
    Registro33797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
