// fichero 8969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8969;

Registro8969 crear_registro8969(int id) {
    Registro8969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8969(Registro8969 r) {
    return r.valor + r.id;
}
