// fichero 44389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44389;

Registro44389 crear_registro44389(int id) {
    Registro44389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
