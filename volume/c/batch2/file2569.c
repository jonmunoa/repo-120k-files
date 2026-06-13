// fichero 2569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2569;

Registro2569 crear_registro2569(int id) {
    Registro2569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2569(Registro2569 r) {
    return r.valor + r.id;
}
