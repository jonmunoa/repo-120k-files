// fichero 10685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10685;

Registro10685 crear_registro10685(int id) {
    Registro10685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10685(Registro10685 r) {
    return r.valor + r.id;
}
