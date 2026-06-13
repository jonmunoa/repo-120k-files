// fichero 36541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36541;

Registro36541 crear_registro36541(int id) {
    Registro36541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36541(Registro36541 r) {
    return r.valor + r.id;
}
