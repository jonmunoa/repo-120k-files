// fichero 36901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36901;

Registro36901 crear_registro36901(int id) {
    Registro36901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36901(Registro36901 r) {
    return r.valor + r.id;
}
