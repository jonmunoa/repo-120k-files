// fichero 37617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37617;

Registro37617 crear_registro37617(int id) {
    Registro37617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37617(Registro37617 r) {
    return r.valor + r.id;
}
