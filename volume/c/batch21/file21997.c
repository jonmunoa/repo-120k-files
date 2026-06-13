// fichero 21997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21997;

Registro21997 crear_registro21997(int id) {
    Registro21997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21997(Registro21997 r) {
    return r.valor + r.id;
}
