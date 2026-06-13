// fichero 5225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5225;

Registro5225 crear_registro5225(int id) {
    Registro5225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5225(Registro5225 r) {
    return r.valor + r.id;
}
