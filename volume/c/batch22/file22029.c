// fichero 22029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22029;

Registro22029 crear_registro22029(int id) {
    Registro22029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
