// fichero 2505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2505;

Registro2505 crear_registro2505(int id) {
    Registro2505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2505(Registro2505 r) {
    return r.valor + r.id;
}
