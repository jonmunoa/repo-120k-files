// fichero 21145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21145;

Registro21145 crear_registro21145(int id) {
    Registro21145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21145(Registro21145 r) {
    return r.valor + r.id;
}
