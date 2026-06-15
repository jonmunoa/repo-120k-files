// fichero 29925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29925;

Registro29925 crear_registro29925(int id) {
    Registro29925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
