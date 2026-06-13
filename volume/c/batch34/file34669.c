// fichero 34669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34669;

Registro34669 crear_registro34669(int id) {
    Registro34669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34669(Registro34669 r) {
    return r.valor + r.id;
}
