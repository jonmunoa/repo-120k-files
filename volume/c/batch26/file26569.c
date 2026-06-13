// fichero 26569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26569;

Registro26569 crear_registro26569(int id) {
    Registro26569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26569(Registro26569 r) {
    return r.valor + r.id;
}
