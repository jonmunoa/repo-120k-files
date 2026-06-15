// fichero 46453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46453;

Registro46453 crear_registro46453(int id) {
    Registro46453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
