// fichero 10453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10453;

Registro10453 crear_registro10453(int id) {
    Registro10453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10453(Registro10453 r) {
    return r.valor + r.id;
}
