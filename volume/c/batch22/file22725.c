// fichero 22725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22725;

Registro22725 crear_registro22725(int id) {
    Registro22725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
