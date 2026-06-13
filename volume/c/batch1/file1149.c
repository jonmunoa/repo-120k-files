// fichero 1149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1149;

Registro1149 crear_registro1149(int id) {
    Registro1149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1149(Registro1149 r) {
    return r.valor + r.id;
}
