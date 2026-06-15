// fichero 38717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38717;

Registro38717 crear_registro38717(int id) {
    Registro38717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
