// fichero 43901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43901;

Registro43901 crear_registro43901(int id) {
    Registro43901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
