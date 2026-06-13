// fichero 27881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27881;

Registro27881 crear_registro27881(int id) {
    Registro27881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27881(Registro27881 r) {
    return r.valor + r.id;
}
