// fichero 1041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1041;

Registro1041 crear_registro1041(int id) {
    Registro1041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1041(Registro1041 r) {
    return r.valor + r.id;
}
