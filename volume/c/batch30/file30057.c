// fichero 30057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30057;

Registro30057 crear_registro30057(int id) {
    Registro30057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30057(Registro30057 r) {
    return r.valor + r.id;
}
