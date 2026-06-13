// fichero 897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro897;

Registro897 crear_registro897(int id) {
    Registro897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro897(Registro897 r) {
    return r.valor + r.id;
}
