// fichero 34645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34645;

Registro34645 crear_registro34645(int id) {
    Registro34645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34645(Registro34645 r) {
    return r.valor + r.id;
}
