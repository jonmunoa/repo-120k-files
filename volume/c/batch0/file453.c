// fichero 453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro453;

Registro453 crear_registro453(int id) {
    Registro453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
