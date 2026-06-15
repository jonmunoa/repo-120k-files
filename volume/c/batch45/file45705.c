// fichero 45705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45705;

Registro45705 crear_registro45705(int id) {
    Registro45705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
