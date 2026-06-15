// fichero 49329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49329;

Registro49329 crear_registro49329(int id) {
    Registro49329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
