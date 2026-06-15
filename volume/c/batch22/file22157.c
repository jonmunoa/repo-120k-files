// fichero 22157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22157;

Registro22157 crear_registro22157(int id) {
    Registro22157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
