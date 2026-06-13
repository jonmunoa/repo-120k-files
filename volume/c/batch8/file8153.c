// fichero 8153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8153;

Registro8153 crear_registro8153(int id) {
    Registro8153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8153(Registro8153 r) {
    return r.valor + r.id;
}
