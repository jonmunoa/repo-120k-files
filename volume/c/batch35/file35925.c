// fichero 35925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35925;

Registro35925 crear_registro35925(int id) {
    Registro35925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
