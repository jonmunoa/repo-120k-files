// fichero 35573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35573;

Registro35573 crear_registro35573(int id) {
    Registro35573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35573(Registro35573 r) {
    return r.valor + r.id;
}
