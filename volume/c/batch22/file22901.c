// fichero 22901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22901;

Registro22901 crear_registro22901(int id) {
    Registro22901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
