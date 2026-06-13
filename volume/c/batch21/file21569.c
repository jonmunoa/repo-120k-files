// fichero 21569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21569;

Registro21569 crear_registro21569(int id) {
    Registro21569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21569(Registro21569 r) {
    return r.valor + r.id;
}
