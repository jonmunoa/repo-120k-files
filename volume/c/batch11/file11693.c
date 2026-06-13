// fichero 11693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11693;

Registro11693 crear_registro11693(int id) {
    Registro11693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11693(Registro11693 r) {
    return r.valor + r.id;
}
