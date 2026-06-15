// fichero 22209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22209;

Registro22209 crear_registro22209(int id) {
    Registro22209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
