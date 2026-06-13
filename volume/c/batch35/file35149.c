// fichero 35149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35149;

Registro35149 crear_registro35149(int id) {
    Registro35149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35149(Registro35149 r) {
    return r.valor + r.id;
}
