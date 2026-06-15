// fichero 45613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45613;

Registro45613 crear_registro45613(int id) {
    Registro45613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
