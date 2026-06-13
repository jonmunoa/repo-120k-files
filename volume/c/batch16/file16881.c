// fichero 16881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16881;

Registro16881 crear_registro16881(int id) {
    Registro16881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16881(Registro16881 r) {
    return r.valor + r.id;
}
