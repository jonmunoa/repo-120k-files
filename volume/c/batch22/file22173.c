// fichero 22173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22173;

Registro22173 crear_registro22173(int id) {
    Registro22173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
