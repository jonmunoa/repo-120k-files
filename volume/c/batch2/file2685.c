// fichero 2685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2685;

Registro2685 crear_registro2685(int id) {
    Registro2685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2685(Registro2685 r) {
    return r.valor + r.id;
}
