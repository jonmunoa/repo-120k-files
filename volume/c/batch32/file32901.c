// fichero 32901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32901;

Registro32901 crear_registro32901(int id) {
    Registro32901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
