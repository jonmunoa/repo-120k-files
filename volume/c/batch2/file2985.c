// fichero 2985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2985;

Registro2985 crear_registro2985(int id) {
    Registro2985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2985(Registro2985 r) {
    return r.valor + r.id;
}
