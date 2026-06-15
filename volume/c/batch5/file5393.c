// fichero 5393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5393;

Registro5393 crear_registro5393(int id) {
    Registro5393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
