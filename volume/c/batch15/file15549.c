// fichero 15549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15549;

Registro15549 crear_registro15549(int id) {
    Registro15549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
