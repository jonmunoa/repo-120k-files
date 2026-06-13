// fichero 36169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36169;

Registro36169 crear_registro36169(int id) {
    Registro36169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36169(Registro36169 r) {
    return r.valor + r.id;
}
