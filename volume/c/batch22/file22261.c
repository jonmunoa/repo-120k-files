// fichero 22261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22261;

Registro22261 crear_registro22261(int id) {
    Registro22261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
