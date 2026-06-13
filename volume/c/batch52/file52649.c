// fichero 52649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52649;

Registro52649 crear_registro52649(int id) {
    Registro52649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52649(Registro52649 r) {
    return r.valor + r.id;
}
