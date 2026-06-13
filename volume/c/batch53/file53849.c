// fichero 53849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53849;

Registro53849 crear_registro53849(int id) {
    Registro53849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53849(Registro53849 r) {
    return r.valor + r.id;
}
