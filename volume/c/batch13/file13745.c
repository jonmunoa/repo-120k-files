// fichero 13745 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13745;

Registro13745 crear_registro13745(int id) {
    Registro13745 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
