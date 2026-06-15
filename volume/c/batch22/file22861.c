// fichero 22861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22861;

Registro22861 crear_registro22861(int id) {
    Registro22861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
