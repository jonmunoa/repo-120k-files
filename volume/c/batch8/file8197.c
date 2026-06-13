// fichero 8197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8197;

Registro8197 crear_registro8197(int id) {
    Registro8197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8197(Registro8197 r) {
    return r.valor + r.id;
}
