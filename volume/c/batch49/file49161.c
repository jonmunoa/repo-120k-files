// fichero 49161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49161;

Registro49161 crear_registro49161(int id) {
    Registro49161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49161(Registro49161 r) {
    return r.valor + r.id;
}
