// fichero 19693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19693;

Registro19693 crear_registro19693(int id) {
    Registro19693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19693(Registro19693 r) {
    return r.valor + r.id;
}
