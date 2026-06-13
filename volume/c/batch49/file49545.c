// fichero 49545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49545;

Registro49545 crear_registro49545(int id) {
    Registro49545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49545(Registro49545 r) {
    return r.valor + r.id;
}
