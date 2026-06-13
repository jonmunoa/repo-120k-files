// fichero 11841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11841;

Registro11841 crear_registro11841(int id) {
    Registro11841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11841(Registro11841 r) {
    return r.valor + r.id;
}
