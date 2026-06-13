// fichero 35525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35525;

Registro35525 crear_registro35525(int id) {
    Registro35525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35525(Registro35525 r) {
    return r.valor + r.id;
}
