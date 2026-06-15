// fichero 22373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22373;

Registro22373 crear_registro22373(int id) {
    Registro22373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
