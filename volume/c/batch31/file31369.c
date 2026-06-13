// fichero 31369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31369;

Registro31369 crear_registro31369(int id) {
    Registro31369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31369(Registro31369 r) {
    return r.valor + r.id;
}
