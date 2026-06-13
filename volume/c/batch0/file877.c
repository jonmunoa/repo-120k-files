// fichero 877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro877;

Registro877 crear_registro877(int id) {
    Registro877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro877(Registro877 r) {
    return r.valor + r.id;
}
