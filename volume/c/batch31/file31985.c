// fichero 31985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31985;

Registro31985 crear_registro31985(int id) {
    Registro31985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31985(Registro31985 r) {
    return r.valor + r.id;
}
