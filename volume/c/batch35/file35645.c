// fichero 35645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35645;

Registro35645 crear_registro35645(int id) {
    Registro35645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35645(Registro35645 r) {
    return r.valor + r.id;
}
