// fichero 44933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44933;

Registro44933 crear_registro44933(int id) {
    Registro44933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44933(Registro44933 r) {
    return r.valor + r.id;
}
