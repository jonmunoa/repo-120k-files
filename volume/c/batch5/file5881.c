// fichero 5881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5881;

Registro5881 crear_registro5881(int id) {
    Registro5881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5881(Registro5881 r) {
    return r.valor + r.id;
}
