// fichero 35077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35077;

Registro35077 crear_registro35077(int id) {
    Registro35077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35077(Registro35077 r) {
    return r.valor + r.id;
}
