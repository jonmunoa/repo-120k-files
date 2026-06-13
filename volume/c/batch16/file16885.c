// fichero 16885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16885;

Registro16885 crear_registro16885(int id) {
    Registro16885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16885(Registro16885 r) {
    return r.valor + r.id;
}
