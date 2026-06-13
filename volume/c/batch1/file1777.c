// fichero 1777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1777;

Registro1777 crear_registro1777(int id) {
    Registro1777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1777(Registro1777 r) {
    return r.valor + r.id;
}
