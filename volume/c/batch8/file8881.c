// fichero 8881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8881;

Registro8881 crear_registro8881(int id) {
    Registro8881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8881(Registro8881 r) {
    return r.valor + r.id;
}
