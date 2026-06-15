// fichero 12989 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12989;

Registro12989 crear_registro12989(int id) {
    Registro12989 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
