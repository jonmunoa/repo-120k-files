// fichero 8745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8745;

Registro8745 crear_registro8745(int id) {
    Registro8745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8745(Registro8745 r) {
    return r.valor + r.id;
}
