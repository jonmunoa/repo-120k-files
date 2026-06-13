// fichero 37161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37161;

Registro37161 crear_registro37161(int id) {
    Registro37161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37161(Registro37161 r) {
    return r.valor + r.id;
}
