// fichero 41677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41677;

Registro41677 crear_registro41677(int id) {
    Registro41677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41677(Registro41677 r) {
    return r.valor + r.id;
}
