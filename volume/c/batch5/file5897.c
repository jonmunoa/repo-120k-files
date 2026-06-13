// fichero 5897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5897;

Registro5897 crear_registro5897(int id) {
    Registro5897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5897(Registro5897 r) {
    return r.valor + r.id;
}
