// fichero 7801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7801;

Registro7801 crear_registro7801(int id) {
    Registro7801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
