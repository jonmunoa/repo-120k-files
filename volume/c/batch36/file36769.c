// fichero 36769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36769;

Registro36769 crear_registro36769(int id) {
    Registro36769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36769(Registro36769 r) {
    return r.valor + r.id;
}
