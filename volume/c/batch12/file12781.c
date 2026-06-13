// fichero 12781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12781;

Registro12781 crear_registro12781(int id) {
    Registro12781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12781(Registro12781 r) {
    return r.valor + r.id;
}
