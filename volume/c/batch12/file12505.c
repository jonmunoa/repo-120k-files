// fichero 12505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12505;

Registro12505 crear_registro12505(int id) {
    Registro12505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12505(Registro12505 r) {
    return r.valor + r.id;
}
