// fichero 35585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35585;

Registro35585 crear_registro35585(int id) {
    Registro35585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35585(Registro35585 r) {
    return r.valor + r.id;
}
