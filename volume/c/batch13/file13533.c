// fichero 13533 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13533;

Registro13533 crear_registro13533(int id) {
    Registro13533 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
