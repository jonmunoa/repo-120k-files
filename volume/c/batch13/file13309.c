// fichero 13309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13309;

Registro13309 crear_registro13309(int id) {
    Registro13309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
