// fichero 5713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5713;

Registro5713 crear_registro5713(int id) {
    Registro5713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5713(Registro5713 r) {
    return r.valor + r.id;
}
