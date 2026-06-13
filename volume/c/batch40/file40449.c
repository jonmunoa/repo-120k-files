// fichero 40449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40449;

Registro40449 crear_registro40449(int id) {
    Registro40449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40449(Registro40449 r) {
    return r.valor + r.id;
}
