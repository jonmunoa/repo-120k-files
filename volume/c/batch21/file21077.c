// fichero 21077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21077;

Registro21077 crear_registro21077(int id) {
    Registro21077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21077(Registro21077 r) {
    return r.valor + r.id;
}
