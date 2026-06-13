// fichero 52433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52433;

Registro52433 crear_registro52433(int id) {
    Registro52433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52433(Registro52433 r) {
    return r.valor + r.id;
}
