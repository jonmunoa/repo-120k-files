// fichero 29093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29093;

Registro29093 crear_registro29093(int id) {
    Registro29093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29093(Registro29093 r) {
    return r.valor + r.id;
}
