// fichero 621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro621;

Registro621 crear_registro621(int id) {
    Registro621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro621(Registro621 r) {
    return r.valor + r.id;
}
