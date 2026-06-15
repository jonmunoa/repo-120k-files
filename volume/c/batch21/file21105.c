// fichero 21105 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21105;

Registro21105 crear_registro21105(int id) {
    Registro21105 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
