// fichero 20785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20785;

Registro20785 crear_registro20785(int id) {
    Registro20785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20785(Registro20785 r) {
    return r.valor + r.id;
}
