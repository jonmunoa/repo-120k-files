// fichero 5929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5929;

Registro5929 crear_registro5929(int id) {
    Registro5929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5929(Registro5929 r) {
    return r.valor + r.id;
}
