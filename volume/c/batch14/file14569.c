// fichero 14569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14569;

Registro14569 crear_registro14569(int id) {
    Registro14569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14569(Registro14569 r) {
    return r.valor + r.id;
}
