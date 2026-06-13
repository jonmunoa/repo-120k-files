// fichero 35093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35093;

Registro35093 crear_registro35093(int id) {
    Registro35093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35093(Registro35093 r) {
    return r.valor + r.id;
}
