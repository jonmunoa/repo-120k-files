// fichero 38953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38953;

Registro38953 crear_registro38953(int id) {
    Registro38953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38953(Registro38953 r) {
    return r.valor + r.id;
}
