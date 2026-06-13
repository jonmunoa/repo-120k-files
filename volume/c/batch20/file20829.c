// fichero 20829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20829;

Registro20829 crear_registro20829(int id) {
    Registro20829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20829(Registro20829 r) {
    return r.valor + r.id;
}
