// fichero 12605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12605;

Registro12605 crear_registro12605(int id) {
    Registro12605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12605(Registro12605 r) {
    return r.valor + r.id;
}
