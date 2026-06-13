// fichero 49901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49901;

Registro49901 crear_registro49901(int id) {
    Registro49901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49901(Registro49901 r) {
    return r.valor + r.id;
}
