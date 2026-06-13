// fichero 33281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33281;

Registro33281 crear_registro33281(int id) {
    Registro33281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33281(Registro33281 r) {
    return r.valor + r.id;
}
