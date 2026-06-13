// fichero 9769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9769;

Registro9769 crear_registro9769(int id) {
    Registro9769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9769(Registro9769 r) {
    return r.valor + r.id;
}
