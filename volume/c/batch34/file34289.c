// fichero 34289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34289;

Registro34289 crear_registro34289(int id) {
    Registro34289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34289(Registro34289 r) {
    return r.valor + r.id;
}
