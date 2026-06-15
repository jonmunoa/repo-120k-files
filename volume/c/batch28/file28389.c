// fichero 28389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28389;

Registro28389 crear_registro28389(int id) {
    Registro28389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
