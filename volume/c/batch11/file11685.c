// fichero 11685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11685;

Registro11685 crear_registro11685(int id) {
    Registro11685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11685(Registro11685 r) {
    return r.valor + r.id;
}
