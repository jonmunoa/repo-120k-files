// fichero 17693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17693;

Registro17693 crear_registro17693(int id) {
    Registro17693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17693(Registro17693 r) {
    return r.valor + r.id;
}
