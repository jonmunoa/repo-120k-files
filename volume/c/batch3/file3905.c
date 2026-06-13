// fichero 3905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3905;

Registro3905 crear_registro3905(int id) {
    Registro3905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3905(Registro3905 r) {
    return r.valor + r.id;
}
