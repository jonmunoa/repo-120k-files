// fichero 26769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26769;

Registro26769 crear_registro26769(int id) {
    Registro26769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26769(Registro26769 r) {
    return r.valor + r.id;
}
