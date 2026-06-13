// fichero 52877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52877;

Registro52877 crear_registro52877(int id) {
    Registro52877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52877(Registro52877 r) {
    return r.valor + r.id;
}
