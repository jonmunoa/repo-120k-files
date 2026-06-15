// fichero 24081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24081;

Registro24081 crear_registro24081(int id) {
    Registro24081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
