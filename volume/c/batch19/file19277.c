// fichero 19277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19277;

Registro19277 crear_registro19277(int id) {
    Registro19277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19277(Registro19277 r) {
    return r.valor + r.id;
}
