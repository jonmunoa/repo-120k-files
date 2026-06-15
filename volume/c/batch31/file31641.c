// fichero 31641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31641;

Registro31641 crear_registro31641(int id) {
    Registro31641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
