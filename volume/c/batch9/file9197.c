// fichero 9197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9197;

Registro9197 crear_registro9197(int id) {
    Registro9197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9197(Registro9197 r) {
    return r.valor + r.id;
}
