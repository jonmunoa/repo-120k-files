// fichero 35629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35629;

Registro35629 crear_registro35629(int id) {
    Registro35629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35629(Registro35629 r) {
    return r.valor + r.id;
}
