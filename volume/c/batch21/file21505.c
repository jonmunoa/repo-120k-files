// fichero 21505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21505;

Registro21505 crear_registro21505(int id) {
    Registro21505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21505(Registro21505 r) {
    return r.valor + r.id;
}
