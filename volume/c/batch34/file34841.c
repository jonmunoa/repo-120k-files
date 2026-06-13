// fichero 34841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34841;

Registro34841 crear_registro34841(int id) {
    Registro34841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34841(Registro34841 r) {
    return r.valor + r.id;
}
