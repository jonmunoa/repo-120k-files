// fichero 13885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13885;

Registro13885 crear_registro13885(int id) {
    Registro13885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
