// fichero 21465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21465;

Registro21465 crear_registro21465(int id) {
    Registro21465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21465(Registro21465 r) {
    return r.valor + r.id;
}
