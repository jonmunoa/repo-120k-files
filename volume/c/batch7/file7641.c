// fichero 7641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7641;

Registro7641 crear_registro7641(int id) {
    Registro7641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
