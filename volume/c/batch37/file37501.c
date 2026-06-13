// fichero 37501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37501;

Registro37501 crear_registro37501(int id) {
    Registro37501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37501(Registro37501 r) {
    return r.valor + r.id;
}
