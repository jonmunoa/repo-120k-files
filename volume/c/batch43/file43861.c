// fichero 43861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43861;

Registro43861 crear_registro43861(int id) {
    Registro43861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
