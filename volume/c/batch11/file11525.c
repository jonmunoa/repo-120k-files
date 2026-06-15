// fichero 11525 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11525;

Registro11525 crear_registro11525(int id) {
    Registro11525 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
