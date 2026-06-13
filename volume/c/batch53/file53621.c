// fichero 53621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53621;

Registro53621 crear_registro53621(int id) {
    Registro53621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53621(Registro53621 r) {
    return r.valor + r.id;
}
