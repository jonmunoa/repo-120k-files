// fichero 47093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47093;

Registro47093 crear_registro47093(int id) {
    Registro47093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47093(Registro47093 r) {
    return r.valor + r.id;
}
