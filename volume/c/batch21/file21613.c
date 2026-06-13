// fichero 21613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21613;

Registro21613 crear_registro21613(int id) {
    Registro21613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21613(Registro21613 r) {
    return r.valor + r.id;
}
