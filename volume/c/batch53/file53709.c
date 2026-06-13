// fichero 53709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53709;

Registro53709 crear_registro53709(int id) {
    Registro53709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53709(Registro53709 r) {
    return r.valor + r.id;
}
