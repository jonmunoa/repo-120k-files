// fichero 27641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27641;

Registro27641 crear_registro27641(int id) {
    Registro27641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
