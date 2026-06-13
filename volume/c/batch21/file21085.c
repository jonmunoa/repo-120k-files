// fichero 21085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21085;

Registro21085 crear_registro21085(int id) {
    Registro21085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21085(Registro21085 r) {
    return r.valor + r.id;
}
