// fichero 47989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47989;

Registro47989 crear_registro47989(int id) {
    Registro47989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47989(Registro47989 r) {
    return r.valor + r.id;
}
