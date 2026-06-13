// fichero 48997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48997;

Registro48997 crear_registro48997(int id) {
    Registro48997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48997(Registro48997 r) {
    return r.valor + r.id;
}
