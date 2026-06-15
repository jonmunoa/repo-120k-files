// fichero 21217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21217;

Registro21217 crear_registro21217(int id) {
    Registro21217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
