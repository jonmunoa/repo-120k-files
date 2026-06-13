// fichero 52205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52205;

Registro52205 crear_registro52205(int id) {
    Registro52205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52205(Registro52205 r) {
    return r.valor + r.id;
}
