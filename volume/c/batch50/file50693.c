// fichero 50693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50693;

Registro50693 crear_registro50693(int id) {
    Registro50693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50693(Registro50693 r) {
    return r.valor + r.id;
}
