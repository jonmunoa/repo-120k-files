// fichero 52765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52765;

Registro52765 crear_registro52765(int id) {
    Registro52765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52765(Registro52765 r) {
    return r.valor + r.id;
}
