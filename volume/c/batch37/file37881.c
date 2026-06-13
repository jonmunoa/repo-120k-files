// fichero 37881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37881;

Registro37881 crear_registro37881(int id) {
    Registro37881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37881(Registro37881 r) {
    return r.valor + r.id;
}
