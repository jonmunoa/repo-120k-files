// fichero 41901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41901;

Registro41901 crear_registro41901(int id) {
    Registro41901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41901(Registro41901 r) {
    return r.valor + r.id;
}
