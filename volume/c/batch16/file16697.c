// fichero 16697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16697;

Registro16697 crear_registro16697(int id) {
    Registro16697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16697(Registro16697 r) {
    return r.valor + r.id;
}
