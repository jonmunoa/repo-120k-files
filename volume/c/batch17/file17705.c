// fichero 17705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17705;

Registro17705 crear_registro17705(int id) {
    Registro17705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
