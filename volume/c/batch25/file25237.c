// fichero 25237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25237;

Registro25237 crear_registro25237(int id) {
    Registro25237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25237(Registro25237 r) {
    return r.valor + r.id;
}
