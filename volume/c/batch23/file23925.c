// fichero 23925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23925;

Registro23925 crear_registro23925(int id) {
    Registro23925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
