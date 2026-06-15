// fichero 8925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8925;

Registro8925 crear_registro8925(int id) {
    Registro8925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
