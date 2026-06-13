// fichero 289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro289;

Registro289 crear_registro289(int id) {
    Registro289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro289(Registro289 r) {
    return r.valor + r.id;
}
