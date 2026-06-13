// fichero 21769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21769;

Registro21769 crear_registro21769(int id) {
    Registro21769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21769(Registro21769 r) {
    return r.valor + r.id;
}
