// fichero 47353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47353;

Registro47353 crear_registro47353(int id) {
    Registro47353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47353(Registro47353 r) {
    return r.valor + r.id;
}
