// fichero 29021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29021;

Registro29021 crear_registro29021(int id) {
    Registro29021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29021(Registro29021 r) {
    return r.valor + r.id;
}
