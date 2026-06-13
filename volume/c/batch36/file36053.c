// fichero 36053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36053;

Registro36053 crear_registro36053(int id) {
    Registro36053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36053(Registro36053 r) {
    return r.valor + r.id;
}
