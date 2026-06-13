// fichero 9325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9325;

Registro9325 crear_registro9325(int id) {
    Registro9325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9325(Registro9325 r) {
    return r.valor + r.id;
}
