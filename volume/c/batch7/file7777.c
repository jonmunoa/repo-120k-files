// fichero 7777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7777;

Registro7777 crear_registro7777(int id) {
    Registro7777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7777(Registro7777 r) {
    return r.valor + r.id;
}
