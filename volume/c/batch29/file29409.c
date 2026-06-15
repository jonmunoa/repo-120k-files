// fichero 29409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29409;

Registro29409 crear_registro29409(int id) {
    Registro29409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
