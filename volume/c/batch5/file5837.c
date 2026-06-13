// fichero 5837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5837;

Registro5837 crear_registro5837(int id) {
    Registro5837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5837(Registro5837 r) {
    return r.valor + r.id;
}
