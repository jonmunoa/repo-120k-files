// fichero 38645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38645;

Registro38645 crear_registro38645(int id) {
    Registro38645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38645(Registro38645 r) {
    return r.valor + r.id;
}
