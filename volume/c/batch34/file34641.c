// fichero 34641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34641;

Registro34641 crear_registro34641(int id) {
    Registro34641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
