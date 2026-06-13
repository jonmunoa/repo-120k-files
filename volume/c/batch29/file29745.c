// fichero 29745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29745;

Registro29745 crear_registro29745(int id) {
    Registro29745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29745(Registro29745 r) {
    return r.valor + r.id;
}
