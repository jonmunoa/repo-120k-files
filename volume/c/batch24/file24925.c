// fichero 24925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24925;

Registro24925 crear_registro24925(int id) {
    Registro24925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
