// fichero 52117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52117;

Registro52117 crear_registro52117(int id) {
    Registro52117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52117(Registro52117 r) {
    return r.valor + r.id;
}
