// fichero 20437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20437;

Registro20437 crear_registro20437(int id) {
    Registro20437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20437(Registro20437 r) {
    return r.valor + r.id;
}
