// fichero 13717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13717;

Registro13717 crear_registro13717(int id) {
    Registro13717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
