// fichero 53277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53277;

Registro53277 crear_registro53277(int id) {
    Registro53277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53277(Registro53277 r) {
    return r.valor + r.id;
}
