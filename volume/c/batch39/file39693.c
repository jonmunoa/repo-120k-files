// fichero 39693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39693;

Registro39693 crear_registro39693(int id) {
    Registro39693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39693(Registro39693 r) {
    return r.valor + r.id;
}
