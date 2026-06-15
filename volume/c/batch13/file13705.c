// fichero 13705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13705;

Registro13705 crear_registro13705(int id) {
    Registro13705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
