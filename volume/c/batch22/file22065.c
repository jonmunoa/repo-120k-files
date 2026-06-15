// fichero 22065 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22065;

Registro22065 crear_registro22065(int id) {
    Registro22065 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
