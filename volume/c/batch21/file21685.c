// fichero 21685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21685;

Registro21685 crear_registro21685(int id) {
    Registro21685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21685(Registro21685 r) {
    return r.valor + r.id;
}
