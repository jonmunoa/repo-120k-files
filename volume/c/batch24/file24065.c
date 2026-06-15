// fichero 24065 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24065;

Registro24065 crear_registro24065(int id) {
    Registro24065 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
