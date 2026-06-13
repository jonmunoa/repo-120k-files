// fichero 9145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9145;

Registro9145 crear_registro9145(int id) {
    Registro9145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9145(Registro9145 r) {
    return r.valor + r.id;
}
