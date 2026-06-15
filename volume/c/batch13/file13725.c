// fichero 13725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13725;

Registro13725 crear_registro13725(int id) {
    Registro13725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
