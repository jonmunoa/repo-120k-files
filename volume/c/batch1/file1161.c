// fichero 1161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1161;

Registro1161 crear_registro1161(int id) {
    Registro1161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1161(Registro1161 r) {
    return r.valor + r.id;
}
