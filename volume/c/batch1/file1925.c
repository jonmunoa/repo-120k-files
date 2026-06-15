// fichero 1925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1925;

Registro1925 crear_registro1925(int id) {
    Registro1925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
