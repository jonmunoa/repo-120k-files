// fichero 3493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3493;

Registro3493 crear_registro3493(int id) {
    Registro3493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3493(Registro3493 r) {
    return r.valor + r.id;
}
