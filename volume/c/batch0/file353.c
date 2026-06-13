// fichero 353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro353;

Registro353 crear_registro353(int id) {
    Registro353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro353(Registro353 r) {
    return r.valor + r.id;
}
