// fichero 52733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52733;

Registro52733 crear_registro52733(int id) {
    Registro52733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52733(Registro52733 r) {
    return r.valor + r.id;
}
