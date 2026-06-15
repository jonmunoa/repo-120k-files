// fichero 49261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49261;

Registro49261 crear_registro49261(int id) {
    Registro49261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
