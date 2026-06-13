// fichero 37353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37353;

Registro37353 crear_registro37353(int id) {
    Registro37353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37353(Registro37353 r) {
    return r.valor + r.id;
}
