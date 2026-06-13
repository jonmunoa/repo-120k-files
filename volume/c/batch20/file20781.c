// fichero 20781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20781;

Registro20781 crear_registro20781(int id) {
    Registro20781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20781(Registro20781 r) {
    return r.valor + r.id;
}
