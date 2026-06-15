// fichero 3297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3297;

Registro3297 crear_registro3297(int id) {
    Registro3297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
