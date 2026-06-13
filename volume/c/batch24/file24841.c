// fichero 24841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24841;

Registro24841 crear_registro24841(int id) {
    Registro24841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24841(Registro24841 r) {
    return r.valor + r.id;
}
