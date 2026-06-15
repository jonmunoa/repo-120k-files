// fichero 35389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35389;

Registro35389 crear_registro35389(int id) {
    Registro35389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
