// fichero 53905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53905;

Registro53905 crear_registro53905(int id) {
    Registro53905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53905(Registro53905 r) {
    return r.valor + r.id;
}
