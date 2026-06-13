// fichero 38053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38053;

Registro38053 crear_registro38053(int id) {
    Registro38053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38053(Registro38053 r) {
    return r.valor + r.id;
}
