// fichero 27965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27965;

Registro27965 crear_registro27965(int id) {
    Registro27965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
