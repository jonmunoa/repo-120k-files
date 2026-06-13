// fichero 50141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50141;

Registro50141 crear_registro50141(int id) {
    Registro50141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50141(Registro50141 r) {
    return r.valor + r.id;
}
