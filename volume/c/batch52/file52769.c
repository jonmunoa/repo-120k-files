// fichero 52769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52769;

Registro52769 crear_registro52769(int id) {
    Registro52769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52769(Registro52769 r) {
    return r.valor + r.id;
}
