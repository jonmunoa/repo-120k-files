// fichero 28149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28149;

Registro28149 crear_registro28149(int id) {
    Registro28149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28149(Registro28149 r) {
    return r.valor + r.id;
}
