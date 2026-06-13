// fichero 12621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12621;

Registro12621 crear_registro12621(int id) {
    Registro12621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12621(Registro12621 r) {
    return r.valor + r.id;
}
