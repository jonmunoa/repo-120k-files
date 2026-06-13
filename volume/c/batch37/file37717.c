// fichero 37717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37717;

Registro37717 crear_registro37717(int id) {
    Registro37717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37717(Registro37717 r) {
    return r.valor + r.id;
}
