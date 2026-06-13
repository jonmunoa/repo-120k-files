// fichero 21733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21733;

Registro21733 crear_registro21733(int id) {
    Registro21733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21733(Registro21733 r) {
    return r.valor + r.id;
}
