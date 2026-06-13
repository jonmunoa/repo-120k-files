// fichero 48277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48277;

Registro48277 crear_registro48277(int id) {
    Registro48277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48277(Registro48277 r) {
    return r.valor + r.id;
}
