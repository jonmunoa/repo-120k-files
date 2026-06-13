// fichero 6161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6161;

Registro6161 crear_registro6161(int id) {
    Registro6161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6161(Registro6161 r) {
    return r.valor + r.id;
}
