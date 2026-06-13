// fichero 35685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35685;

Registro35685 crear_registro35685(int id) {
    Registro35685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35685(Registro35685 r) {
    return r.valor + r.id;
}
