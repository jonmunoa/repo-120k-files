// fichero 3961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3961;

Registro3961 crear_registro3961(int id) {
    Registro3961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3961(Registro3961 r) {
    return r.valor + r.id;
}
