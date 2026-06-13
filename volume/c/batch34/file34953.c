// fichero 34953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34953;

Registro34953 crear_registro34953(int id) {
    Registro34953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34953(Registro34953 r) {
    return r.valor + r.id;
}
