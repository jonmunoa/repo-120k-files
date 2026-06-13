// fichero 53765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53765;

Registro53765 crear_registro53765(int id) {
    Registro53765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53765(Registro53765 r) {
    return r.valor + r.id;
}
