// fichero 39837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39837;

Registro39837 crear_registro39837(int id) {
    Registro39837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39837(Registro39837 r) {
    return r.valor + r.id;
}
