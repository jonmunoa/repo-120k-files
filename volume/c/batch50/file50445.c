// fichero 50445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50445;

Registro50445 crear_registro50445(int id) {
    Registro50445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50445(Registro50445 r) {
    return r.valor + r.id;
}
