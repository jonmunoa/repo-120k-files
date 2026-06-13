// fichero 29053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29053;

Registro29053 crear_registro29053(int id) {
    Registro29053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29053(Registro29053 r) {
    return r.valor + r.id;
}
