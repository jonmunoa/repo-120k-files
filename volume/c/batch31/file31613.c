// fichero 31613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31613;

Registro31613 crear_registro31613(int id) {
    Registro31613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
