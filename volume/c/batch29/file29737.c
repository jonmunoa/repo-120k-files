// fichero 29737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29737;

Registro29737 crear_registro29737(int id) {
    Registro29737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29737(Registro29737 r) {
    return r.valor + r.id;
}
