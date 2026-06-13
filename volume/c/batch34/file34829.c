// fichero 34829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34829;

Registro34829 crear_registro34829(int id) {
    Registro34829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34829(Registro34829 r) {
    return r.valor + r.id;
}
