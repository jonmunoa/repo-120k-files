// fichero 35705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35705;

Registro35705 crear_registro35705(int id) {
    Registro35705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35705(Registro35705 r) {
    return r.valor + r.id;
}
