// fichero 24877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24877;

Registro24877 crear_registro24877(int id) {
    Registro24877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24877(Registro24877 r) {
    return r.valor + r.id;
}
