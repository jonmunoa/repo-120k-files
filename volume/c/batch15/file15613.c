// fichero 15613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15613;

Registro15613 crear_registro15613(int id) {
    Registro15613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
