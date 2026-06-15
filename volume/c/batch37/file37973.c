// fichero 37973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37973;

Registro37973 crear_registro37973(int id) {
    Registro37973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
