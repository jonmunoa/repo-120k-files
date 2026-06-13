// fichero 48569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48569;

Registro48569 crear_registro48569(int id) {
    Registro48569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48569(Registro48569 r) {
    return r.valor + r.id;
}
