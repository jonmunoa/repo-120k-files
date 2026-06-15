// fichero 22125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22125;

Registro22125 crear_registro22125(int id) {
    Registro22125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
