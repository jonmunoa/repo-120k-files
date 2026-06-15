// fichero 39329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39329;

Registro39329 crear_registro39329(int id) {
    Registro39329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
