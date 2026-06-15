// fichero 22741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22741;

Registro22741 crear_registro22741(int id) {
    Registro22741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
