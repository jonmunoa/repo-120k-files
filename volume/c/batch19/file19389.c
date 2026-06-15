// fichero 19389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19389;

Registro19389 crear_registro19389(int id) {
    Registro19389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
