// fichero 43705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43705;

Registro43705 crear_registro43705(int id) {
    Registro43705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
