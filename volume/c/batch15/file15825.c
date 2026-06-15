// fichero 15825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15825;

Registro15825 crear_registro15825(int id) {
    Registro15825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
