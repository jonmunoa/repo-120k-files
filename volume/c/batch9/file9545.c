// fichero 9545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9545;

Registro9545 crear_registro9545(int id) {
    Registro9545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9545(Registro9545 r) {
    return r.valor + r.id;
}
