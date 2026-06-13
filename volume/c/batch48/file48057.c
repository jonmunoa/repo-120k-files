// fichero 48057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48057;

Registro48057 crear_registro48057(int id) {
    Registro48057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48057(Registro48057 r) {
    return r.valor + r.id;
}
