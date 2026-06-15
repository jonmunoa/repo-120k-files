// fichero 34389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34389;

Registro34389 crear_registro34389(int id) {
    Registro34389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
