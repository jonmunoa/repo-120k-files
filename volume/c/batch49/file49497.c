// fichero 49497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49497;

Registro49497 crear_registro49497(int id) {
    Registro49497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49497(Registro49497 r) {
    return r.valor + r.id;
}
