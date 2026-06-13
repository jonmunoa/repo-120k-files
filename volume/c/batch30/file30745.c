// fichero 30745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30745;

Registro30745 crear_registro30745(int id) {
    Registro30745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30745(Registro30745 r) {
    return r.valor + r.id;
}
