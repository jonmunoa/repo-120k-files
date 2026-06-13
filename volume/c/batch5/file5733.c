// fichero 5733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5733;

Registro5733 crear_registro5733(int id) {
    Registro5733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5733(Registro5733 r) {
    return r.valor + r.id;
}
