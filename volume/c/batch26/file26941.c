// fichero 26941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26941;

Registro26941 crear_registro26941(int id) {
    Registro26941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26941(Registro26941 r) {
    return r.valor + r.id;
}
