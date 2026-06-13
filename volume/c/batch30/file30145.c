// fichero 30145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30145;

Registro30145 crear_registro30145(int id) {
    Registro30145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30145(Registro30145 r) {
    return r.valor + r.id;
}
