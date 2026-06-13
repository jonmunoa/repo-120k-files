// fichero 21573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21573;

Registro21573 crear_registro21573(int id) {
    Registro21573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21573(Registro21573 r) {
    return r.valor + r.id;
}
