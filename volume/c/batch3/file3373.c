// fichero 3373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3373;

Registro3373 crear_registro3373(int id) {
    Registro3373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3373(Registro3373 r) {
    return r.valor + r.id;
}
