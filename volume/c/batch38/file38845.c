// fichero 38845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38845;

Registro38845 crear_registro38845(int id) {
    Registro38845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38845(Registro38845 r) {
    return r.valor + r.id;
}
