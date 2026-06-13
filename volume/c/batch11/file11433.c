// fichero 11433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11433;

Registro11433 crear_registro11433(int id) {
    Registro11433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11433(Registro11433 r) {
    return r.valor + r.id;
}
