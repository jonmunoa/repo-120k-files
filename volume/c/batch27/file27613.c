// fichero 27613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27613;

Registro27613 crear_registro27613(int id) {
    Registro27613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
