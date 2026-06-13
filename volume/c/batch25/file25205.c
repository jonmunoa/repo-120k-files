// fichero 25205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25205;

Registro25205 crear_registro25205(int id) {
    Registro25205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25205(Registro25205 r) {
    return r.valor + r.id;
}
