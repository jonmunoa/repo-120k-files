// fichero 2925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2925;

Registro2925 crear_registro2925(int id) {
    Registro2925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
