// fichero 12801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12801;

Registro12801 crear_registro12801(int id) {
    Registro12801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12801(Registro12801 r) {
    return r.valor + r.id;
}
