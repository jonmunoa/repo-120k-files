// fichero 39057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39057;

Registro39057 crear_registro39057(int id) {
    Registro39057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39057(Registro39057 r) {
    return r.valor + r.id;
}
