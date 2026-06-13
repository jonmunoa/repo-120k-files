// fichero 52509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52509;

Registro52509 crear_registro52509(int id) {
    Registro52509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52509(Registro52509 r) {
    return r.valor + r.id;
}
