// fichero 53829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53829;

Registro53829 crear_registro53829(int id) {
    Registro53829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53829(Registro53829 r) {
    return r.valor + r.id;
}
