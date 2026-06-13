// fichero 35437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35437;

Registro35437 crear_registro35437(int id) {
    Registro35437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35437(Registro35437 r) {
    return r.valor + r.id;
}
