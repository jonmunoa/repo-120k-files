// fichero 38693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38693;

Registro38693 crear_registro38693(int id) {
    Registro38693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38693(Registro38693 r) {
    return r.valor + r.id;
}
