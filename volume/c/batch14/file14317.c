// fichero 14317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14317;

Registro14317 crear_registro14317(int id) {
    Registro14317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
