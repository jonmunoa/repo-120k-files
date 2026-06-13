// fichero 36317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36317;

Registro36317 crear_registro36317(int id) {
    Registro36317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36317(Registro36317 r) {
    return r.valor + r.id;
}
