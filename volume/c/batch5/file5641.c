// fichero 5641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5641;

Registro5641 crear_registro5641(int id) {
    Registro5641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
