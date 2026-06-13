// fichero 5693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5693;

Registro5693 crear_registro5693(int id) {
    Registro5693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5693(Registro5693 r) {
    return r.valor + r.id;
}
