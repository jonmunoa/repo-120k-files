// fichero 18641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18641;

Registro18641 crear_registro18641(int id) {
    Registro18641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
