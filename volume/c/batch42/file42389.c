// fichero 42389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42389;

Registro42389 crear_registro42389(int id) {
    Registro42389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
