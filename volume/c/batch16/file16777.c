// fichero 16777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16777;

Registro16777 crear_registro16777(int id) {
    Registro16777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16777(Registro16777 r) {
    return r.valor + r.id;
}
