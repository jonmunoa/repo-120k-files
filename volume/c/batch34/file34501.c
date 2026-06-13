// fichero 34501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34501;

Registro34501 crear_registro34501(int id) {
    Registro34501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34501(Registro34501 r) {
    return r.valor + r.id;
}
