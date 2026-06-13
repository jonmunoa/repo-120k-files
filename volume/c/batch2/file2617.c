// fichero 2617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2617;

Registro2617 crear_registro2617(int id) {
    Registro2617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2617(Registro2617 r) {
    return r.valor + r.id;
}
