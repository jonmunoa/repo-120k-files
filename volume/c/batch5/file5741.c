// fichero 5741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5741;

Registro5741 crear_registro5741(int id) {
    Registro5741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5741(Registro5741 r) {
    return r.valor + r.id;
}
