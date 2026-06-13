// fichero 28793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28793;

Registro28793 crear_registro28793(int id) {
    Registro28793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28793(Registro28793 r) {
    return r.valor + r.id;
}
