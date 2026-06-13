// fichero 9733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9733;

Registro9733 crear_registro9733(int id) {
    Registro9733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9733(Registro9733 r) {
    return r.valor + r.id;
}
