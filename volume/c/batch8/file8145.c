// fichero 8145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8145;

Registro8145 crear_registro8145(int id) {
    Registro8145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8145(Registro8145 r) {
    return r.valor + r.id;
}
