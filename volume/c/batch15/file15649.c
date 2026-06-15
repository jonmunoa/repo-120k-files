// fichero 15649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15649;

Registro15649 crear_registro15649(int id) {
    Registro15649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
