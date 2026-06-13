// fichero 1117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1117;

Registro1117 crear_registro1117(int id) {
    Registro1117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1117(Registro1117 r) {
    return r.valor + r.id;
}
