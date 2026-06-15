// fichero 20389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20389;

Registro20389 crear_registro20389(int id) {
    Registro20389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
