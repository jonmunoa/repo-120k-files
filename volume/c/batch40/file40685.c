// fichero 40685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40685;

Registro40685 crear_registro40685(int id) {
    Registro40685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40685(Registro40685 r) {
    return r.valor + r.id;
}
