// fichero 16545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16545;

Registro16545 crear_registro16545(int id) {
    Registro16545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16545(Registro16545 r) {
    return r.valor + r.id;
}
