// fichero 21821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21821;

Registro21821 crear_registro21821(int id) {
    Registro21821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21821(Registro21821 r) {
    return r.valor + r.id;
}
