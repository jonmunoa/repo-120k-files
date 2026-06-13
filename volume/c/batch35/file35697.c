// fichero 35697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35697;

Registro35697 crear_registro35697(int id) {
    Registro35697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35697(Registro35697 r) {
    return r.valor + r.id;
}
