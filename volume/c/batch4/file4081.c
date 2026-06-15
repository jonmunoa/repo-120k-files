// fichero 4081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4081;

Registro4081 crear_registro4081(int id) {
    Registro4081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
