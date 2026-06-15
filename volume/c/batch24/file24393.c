// fichero 24393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24393;

Registro24393 crear_registro24393(int id) {
    Registro24393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
