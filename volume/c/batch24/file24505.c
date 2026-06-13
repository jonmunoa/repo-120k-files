// fichero 24505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24505;

Registro24505 crear_registro24505(int id) {
    Registro24505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24505(Registro24505 r) {
    return r.valor + r.id;
}
