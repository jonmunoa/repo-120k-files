// fichero 22105 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22105;

Registro22105 crear_registro22105(int id) {
    Registro22105 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
