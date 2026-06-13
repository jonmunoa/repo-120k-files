// fichero 21369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21369;

Registro21369 crear_registro21369(int id) {
    Registro21369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21369(Registro21369 r) {
    return r.valor + r.id;
}
