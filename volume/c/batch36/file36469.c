// fichero 36469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36469;

Registro36469 crear_registro36469(int id) {
    Registro36469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36469(Registro36469 r) {
    return r.valor + r.id;
}
