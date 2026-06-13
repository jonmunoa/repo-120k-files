// fichero 30085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30085;

Registro30085 crear_registro30085(int id) {
    Registro30085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30085(Registro30085 r) {
    return r.valor + r.id;
}
