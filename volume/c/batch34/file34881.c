// fichero 34881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34881;

Registro34881 crear_registro34881(int id) {
    Registro34881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34881(Registro34881 r) {
    return r.valor + r.id;
}
