// fichero 30341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30341;

Registro30341 crear_registro30341(int id) {
    Registro30341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
