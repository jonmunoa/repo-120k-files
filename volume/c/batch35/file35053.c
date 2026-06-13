// fichero 35053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35053;

Registro35053 crear_registro35053(int id) {
    Registro35053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35053(Registro35053 r) {
    return r.valor + r.id;
}
