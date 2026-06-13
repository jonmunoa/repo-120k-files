// fichero 18533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18533;

Registro18533 crear_registro18533(int id) {
    Registro18533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18533(Registro18533 r) {
    return r.valor + r.id;
}
