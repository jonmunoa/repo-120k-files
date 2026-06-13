// fichero 39569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39569;

Registro39569 crear_registro39569(int id) {
    Registro39569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39569(Registro39569 r) {
    return r.valor + r.id;
}
