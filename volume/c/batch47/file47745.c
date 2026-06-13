// fichero 47745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47745;

Registro47745 crear_registro47745(int id) {
    Registro47745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47745(Registro47745 r) {
    return r.valor + r.id;
}
