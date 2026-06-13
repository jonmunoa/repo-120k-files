// fichero 39777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39777;

Registro39777 crear_registro39777(int id) {
    Registro39777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39777(Registro39777 r) {
    return r.valor + r.id;
}
