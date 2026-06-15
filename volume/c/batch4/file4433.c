// fichero 4433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4433;

Registro4433 crear_registro4433(int id) {
    Registro4433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
