// fichero 34273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34273;

Registro34273 crear_registro34273(int id) {
    Registro34273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
