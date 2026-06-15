// fichero 17625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17625;

Registro17625 crear_registro17625(int id) {
    Registro17625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
