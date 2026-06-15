// fichero 47329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47329;

Registro47329 crear_registro47329(int id) {
    Registro47329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
