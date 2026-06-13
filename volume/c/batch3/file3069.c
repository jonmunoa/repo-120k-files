// fichero 3069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3069;

Registro3069 crear_registro3069(int id) {
    Registro3069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3069(Registro3069 r) {
    return r.valor + r.id;
}
