// fichero 12693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12693;

Registro12693 crear_registro12693(int id) {
    Registro12693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12693(Registro12693 r) {
    return r.valor + r.id;
}
