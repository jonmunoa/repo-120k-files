// fichero 47641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47641;

Registro47641 crear_registro47641(int id) {
    Registro47641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
