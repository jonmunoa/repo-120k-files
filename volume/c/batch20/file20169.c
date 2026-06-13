// fichero 20169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20169;

Registro20169 crear_registro20169(int id) {
    Registro20169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20169(Registro20169 r) {
    return r.valor + r.id;
}
