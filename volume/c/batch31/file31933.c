// fichero 31933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31933;

Registro31933 crear_registro31933(int id) {
    Registro31933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31933(Registro31933 r) {
    return r.valor + r.id;
}
