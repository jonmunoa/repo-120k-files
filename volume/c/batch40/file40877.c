// fichero 40877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40877;

Registro40877 crear_registro40877(int id) {
    Registro40877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40877(Registro40877 r) {
    return r.valor + r.id;
}
