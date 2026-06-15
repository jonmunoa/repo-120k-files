// fichero 49925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49925;

Registro49925 crear_registro49925(int id) {
    Registro49925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
