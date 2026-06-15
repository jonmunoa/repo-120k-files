// fichero 22561 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22561;

Registro22561 crear_registro22561(int id) {
    Registro22561 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
