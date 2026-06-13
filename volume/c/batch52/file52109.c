// fichero 52109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52109;

Registro52109 crear_registro52109(int id) {
    Registro52109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52109(Registro52109 r) {
    return r.valor + r.id;
}
