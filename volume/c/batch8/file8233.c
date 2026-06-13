// fichero 8233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8233;

Registro8233 crear_registro8233(int id) {
    Registro8233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8233(Registro8233 r) {
    return r.valor + r.id;
}
