// fichero 44613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44613;

Registro44613 crear_registro44613(int id) {
    Registro44613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
