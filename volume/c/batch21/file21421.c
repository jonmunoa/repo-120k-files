// fichero 21421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21421;

Registro21421 crear_registro21421(int id) {
    Registro21421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
