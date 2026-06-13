// fichero 35281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35281;

Registro35281 crear_registro35281(int id) {
    Registro35281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35281(Registro35281 r) {
    return r.valor + r.id;
}
