// fichero 36925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36925;

Registro36925 crear_registro36925(int id) {
    Registro36925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
