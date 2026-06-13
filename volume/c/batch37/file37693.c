// fichero 37693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37693;

Registro37693 crear_registro37693(int id) {
    Registro37693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37693(Registro37693 r) {
    return r.valor + r.id;
}
