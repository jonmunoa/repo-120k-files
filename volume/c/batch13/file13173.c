// fichero 13173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13173;

Registro13173 crear_registro13173(int id) {
    Registro13173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
