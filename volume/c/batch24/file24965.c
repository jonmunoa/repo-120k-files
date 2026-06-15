// fichero 24965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24965;

Registro24965 crear_registro24965(int id) {
    Registro24965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
