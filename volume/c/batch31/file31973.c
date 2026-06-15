// fichero 31973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31973;

Registro31973 crear_registro31973(int id) {
    Registro31973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
