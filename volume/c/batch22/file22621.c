// fichero 22621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22621;

Registro22621 crear_registro22621(int id) {
    Registro22621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
