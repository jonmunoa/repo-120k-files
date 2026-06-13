// fichero 44801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44801;

Registro44801 crear_registro44801(int id) {
    Registro44801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44801(Registro44801 r) {
    return r.valor + r.id;
}
