// fichero 52189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52189;

Registro52189 crear_registro52189(int id) {
    Registro52189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52189(Registro52189 r) {
    return r.valor + r.id;
}
