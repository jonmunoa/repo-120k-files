// fichero 18693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18693;

Registro18693 crear_registro18693(int id) {
    Registro18693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18693(Registro18693 r) {
    return r.valor + r.id;
}
