// fichero 30793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30793;

Registro30793 crear_registro30793(int id) {
    Registro30793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30793(Registro30793 r) {
    return r.valor + r.id;
}
