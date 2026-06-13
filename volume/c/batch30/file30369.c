// fichero 30369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30369;

Registro30369 crear_registro30369(int id) {
    Registro30369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30369(Registro30369 r) {
    return r.valor + r.id;
}
