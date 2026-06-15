// fichero 13497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13497;

Registro13497 crear_registro13497(int id) {
    Registro13497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
