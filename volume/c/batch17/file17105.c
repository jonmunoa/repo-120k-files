// fichero 17105 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17105;

Registro17105 crear_registro17105(int id) {
    Registro17105 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
