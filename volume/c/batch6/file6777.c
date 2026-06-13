// fichero 6777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6777;

Registro6777 crear_registro6777(int id) {
    Registro6777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6777(Registro6777 r) {
    return r.valor + r.id;
}
