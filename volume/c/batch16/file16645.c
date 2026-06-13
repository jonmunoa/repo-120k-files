// fichero 16645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16645;

Registro16645 crear_registro16645(int id) {
    Registro16645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16645(Registro16645 r) {
    return r.valor + r.id;
}
