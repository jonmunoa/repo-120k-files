// fichero 49169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49169;

Registro49169 crear_registro49169(int id) {
    Registro49169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49169(Registro49169 r) {
    return r.valor + r.id;
}
