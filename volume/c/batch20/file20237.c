// fichero 20237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20237;

Registro20237 crear_registro20237(int id) {
    Registro20237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20237(Registro20237 r) {
    return r.valor + r.id;
}
