// fichero 43613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43613;

Registro43613 crear_registro43613(int id) {
    Registro43613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
