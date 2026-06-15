// fichero 26389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26389;

Registro26389 crear_registro26389(int id) {
    Registro26389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
