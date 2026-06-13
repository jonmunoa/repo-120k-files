// fichero 35693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35693;

Registro35693 crear_registro35693(int id) {
    Registro35693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35693(Registro35693 r) {
    return r.valor + r.id;
}
