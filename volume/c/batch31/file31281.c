// fichero 31281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31281;

Registro31281 crear_registro31281(int id) {
    Registro31281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
