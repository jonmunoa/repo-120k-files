// fichero 49717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49717;

Registro49717 crear_registro49717(int id) {
    Registro49717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49717(Registro49717 r) {
    return r.valor + r.id;
}
