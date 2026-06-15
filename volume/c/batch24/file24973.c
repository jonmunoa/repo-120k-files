// fichero 24973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24973;

Registro24973 crear_registro24973(int id) {
    Registro24973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
