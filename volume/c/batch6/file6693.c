// fichero 6693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6693;

Registro6693 crear_registro6693(int id) {
    Registro6693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6693(Registro6693 r) {
    return r.valor + r.id;
}
