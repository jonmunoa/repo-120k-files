// fichero 36301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36301;

Registro36301 crear_registro36301(int id) {
    Registro36301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36301(Registro36301 r) {
    return r.valor + r.id;
}
