// fichero 13421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13421;

Registro13421 crear_registro13421(int id) {
    Registro13421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
