// fichero 5265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5265;

Registro5265 crear_registro5265(int id) {
    Registro5265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5265(Registro5265 r) {
    return r.valor + r.id;
}
