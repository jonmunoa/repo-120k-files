// fichero 52745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52745;

Registro52745 crear_registro52745(int id) {
    Registro52745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52745(Registro52745 r) {
    return r.valor + r.id;
}
