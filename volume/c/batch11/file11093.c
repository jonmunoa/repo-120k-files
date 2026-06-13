// fichero 11093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11093;

Registro11093 crear_registro11093(int id) {
    Registro11093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11093(Registro11093 r) {
    return r.valor + r.id;
}
