// fichero 7741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7741;

Registro7741 crear_registro7741(int id) {
    Registro7741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7741(Registro7741 r) {
    return r.valor + r.id;
}
