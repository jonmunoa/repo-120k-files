// fichero 21953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21953;

Registro21953 crear_registro21953(int id) {
    Registro21953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21953(Registro21953 r) {
    return r.valor + r.id;
}
