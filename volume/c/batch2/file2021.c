// fichero 2021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2021;

Registro2021 crear_registro2021(int id) {
    Registro2021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2021(Registro2021 r) {
    return r.valor + r.id;
}
