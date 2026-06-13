// fichero 16277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16277;

Registro16277 crear_registro16277(int id) {
    Registro16277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16277(Registro16277 r) {
    return r.valor + r.id;
}
