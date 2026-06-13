// fichero 35021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35021;

Registro35021 crear_registro35021(int id) {
    Registro35021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35021(Registro35021 r) {
    return r.valor + r.id;
}
