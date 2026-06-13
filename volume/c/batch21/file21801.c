// fichero 21801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21801;

Registro21801 crear_registro21801(int id) {
    Registro21801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21801(Registro21801 r) {
    return r.valor + r.id;
}
