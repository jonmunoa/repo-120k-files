// fichero 21249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21249;

Registro21249 crear_registro21249(int id) {
    Registro21249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21249(Registro21249 r) {
    return r.valor + r.id;
}
