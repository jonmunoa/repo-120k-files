// fichero 16733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16733;

Registro16733 crear_registro16733(int id) {
    Registro16733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16733(Registro16733 r) {
    return r.valor + r.id;
}
