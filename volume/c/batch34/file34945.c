// fichero 34945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34945;

Registro34945 crear_registro34945(int id) {
    Registro34945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34945(Registro34945 r) {
    return r.valor + r.id;
}
