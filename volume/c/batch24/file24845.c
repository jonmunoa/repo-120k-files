// fichero 24845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24845;

Registro24845 crear_registro24845(int id) {
    Registro24845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24845(Registro24845 r) {
    return r.valor + r.id;
}
