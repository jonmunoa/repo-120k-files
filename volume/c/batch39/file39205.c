// fichero 39205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39205;

Registro39205 crear_registro39205(int id) {
    Registro39205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39205(Registro39205 r) {
    return r.valor + r.id;
}
