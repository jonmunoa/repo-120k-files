// fichero 24017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24017;

Registro24017 crear_registro24017(int id) {
    Registro24017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
