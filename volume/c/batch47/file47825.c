// fichero 47825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47825;

Registro47825 crear_registro47825(int id) {
    Registro47825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
