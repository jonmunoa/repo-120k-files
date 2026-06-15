// fichero 13613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13613;

Registro13613 crear_registro13613(int id) {
    Registro13613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
