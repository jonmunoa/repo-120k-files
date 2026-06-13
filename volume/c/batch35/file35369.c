// fichero 35369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35369;

Registro35369 crear_registro35369(int id) {
    Registro35369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35369(Registro35369 r) {
    return r.valor + r.id;
}
