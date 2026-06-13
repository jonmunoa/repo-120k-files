// fichero 5809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5809;

Registro5809 crear_registro5809(int id) {
    Registro5809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5809(Registro5809 r) {
    return r.valor + r.id;
}
