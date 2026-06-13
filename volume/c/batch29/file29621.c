// fichero 29621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29621;

Registro29621 crear_registro29621(int id) {
    Registro29621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29621(Registro29621 r) {
    return r.valor + r.id;
}
