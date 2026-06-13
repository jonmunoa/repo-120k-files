// fichero 14181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14181;

Registro14181 crear_registro14181(int id) {
    Registro14181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14181(Registro14181 r) {
    return r.valor + r.id;
}
