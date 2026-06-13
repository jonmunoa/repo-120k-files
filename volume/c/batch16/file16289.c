// fichero 16289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16289;

Registro16289 crear_registro16289(int id) {
    Registro16289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16289(Registro16289 r) {
    return r.valor + r.id;
}
