// fichero 5085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5085;

Registro5085 crear_registro5085(int id) {
    Registro5085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5085(Registro5085 r) {
    return r.valor + r.id;
}
