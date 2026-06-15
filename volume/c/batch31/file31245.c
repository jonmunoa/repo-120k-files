// fichero 31245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31245;

Registro31245 crear_registro31245(int id) {
    Registro31245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
