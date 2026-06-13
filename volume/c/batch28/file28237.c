// fichero 28237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28237;

Registro28237 crear_registro28237(int id) {
    Registro28237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28237(Registro28237 r) {
    return r.valor + r.id;
}
