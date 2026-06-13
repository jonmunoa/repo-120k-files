// fichero 8901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8901;

Registro8901 crear_registro8901(int id) {
    Registro8901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8901(Registro8901 r) {
    return r.valor + r.id;
}
