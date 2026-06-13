// fichero 34621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34621;

Registro34621 crear_registro34621(int id) {
    Registro34621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34621(Registro34621 r) {
    return r.valor + r.id;
}
