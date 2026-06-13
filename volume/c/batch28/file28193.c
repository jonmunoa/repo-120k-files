// fichero 28193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28193;

Registro28193 crear_registro28193(int id) {
    Registro28193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28193(Registro28193 r) {
    return r.valor + r.id;
}
