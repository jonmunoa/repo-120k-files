// fichero 34317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34317;

Registro34317 crear_registro34317(int id) {
    Registro34317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34317(Registro34317 r) {
    return r.valor + r.id;
}
