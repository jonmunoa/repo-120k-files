// fichero 1053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1053;

Registro1053 crear_registro1053(int id) {
    Registro1053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1053(Registro1053 r) {
    return r.valor + r.id;
}
