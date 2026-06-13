// fichero 1241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1241;

Registro1241 crear_registro1241(int id) {
    Registro1241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1241(Registro1241 r) {
    return r.valor + r.id;
}
