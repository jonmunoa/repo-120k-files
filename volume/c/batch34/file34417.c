// fichero 34417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34417;

Registro34417 crear_registro34417(int id) {
    Registro34417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34417(Registro34417 r) {
    return r.valor + r.id;
}
