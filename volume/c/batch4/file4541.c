// fichero 4541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4541;

Registro4541 crear_registro4541(int id) {
    Registro4541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
