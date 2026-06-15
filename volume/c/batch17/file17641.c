// fichero 17641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17641;

Registro17641 crear_registro17641(int id) {
    Registro17641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
