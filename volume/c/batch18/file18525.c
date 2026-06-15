// fichero 18525 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18525;

Registro18525 crear_registro18525(int id) {
    Registro18525 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
