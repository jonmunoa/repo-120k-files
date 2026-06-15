// fichero 27705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27705;

Registro27705 crear_registro27705(int id) {
    Registro27705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
