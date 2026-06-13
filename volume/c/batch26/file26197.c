// fichero 26197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26197;

Registro26197 crear_registro26197(int id) {
    Registro26197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26197(Registro26197 r) {
    return r.valor + r.id;
}
