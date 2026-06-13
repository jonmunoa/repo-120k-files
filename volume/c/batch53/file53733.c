// fichero 53733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53733;

Registro53733 crear_registro53733(int id) {
    Registro53733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53733(Registro53733 r) {
    return r.valor + r.id;
}
