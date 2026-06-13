// fichero 3901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3901;

Registro3901 crear_registro3901(int id) {
    Registro3901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3901(Registro3901 r) {
    return r.valor + r.id;
}
