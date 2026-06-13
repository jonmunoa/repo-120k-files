// fichero 38573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38573;

Registro38573 crear_registro38573(int id) {
    Registro38573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38573(Registro38573 r) {
    return r.valor + r.id;
}
