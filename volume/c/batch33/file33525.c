// fichero 33525 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33525;

Registro33525 crear_registro33525(int id) {
    Registro33525 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
