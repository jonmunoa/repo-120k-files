// fichero 46777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46777;

Registro46777 crear_registro46777(int id) {
    Registro46777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46777(Registro46777 r) {
    return r.valor + r.id;
}
