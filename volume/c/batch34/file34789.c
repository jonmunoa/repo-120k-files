// fichero 34789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34789;

Registro34789 crear_registro34789(int id) {
    Registro34789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34789(Registro34789 r) {
    return r.valor + r.id;
}
