// fichero 4685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4685;

Registro4685 crear_registro4685(int id) {
    Registro4685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4685(Registro4685 r) {
    return r.valor + r.id;
}
