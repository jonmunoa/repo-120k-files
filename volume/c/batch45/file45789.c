// fichero 45789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45789;

Registro45789 crear_registro45789(int id) {
    Registro45789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
