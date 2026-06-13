// fichero 42741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42741;

Registro42741 crear_registro42741(int id) {
    Registro42741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42741(Registro42741 r) {
    return r.valor + r.id;
}
