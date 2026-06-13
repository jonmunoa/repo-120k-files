// fichero 5545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5545;

Registro5545 crear_registro5545(int id) {
    Registro5545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5545(Registro5545 r) {
    return r.valor + r.id;
}
