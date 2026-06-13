// fichero 34081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34081;

Registro34081 crear_registro34081(int id) {
    Registro34081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34081(Registro34081 r) {
    return r.valor + r.id;
}
