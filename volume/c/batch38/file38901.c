// fichero 38901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38901;

Registro38901 crear_registro38901(int id) {
    Registro38901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
