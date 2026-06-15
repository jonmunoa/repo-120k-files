// fichero 5925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5925;

Registro5925 crear_registro5925(int id) {
    Registro5925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
