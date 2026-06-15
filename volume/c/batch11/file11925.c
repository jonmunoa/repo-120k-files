// fichero 11925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11925;

Registro11925 crear_registro11925(int id) {
    Registro11925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
