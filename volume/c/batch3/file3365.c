// fichero 3365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3365;

Registro3365 crear_registro3365(int id) {
    Registro3365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3365(Registro3365 r) {
    return r.valor + r.id;
}
