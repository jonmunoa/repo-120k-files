// fichero 49705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49705;

Registro49705 crear_registro49705(int id) {
    Registro49705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
