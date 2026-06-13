// fichero 23901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23901;

Registro23901 crear_registro23901(int id) {
    Registro23901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23901(Registro23901 r) {
    return r.valor + r.id;
}
