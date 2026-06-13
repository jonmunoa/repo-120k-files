// fichero 9005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9005;

Registro9005 crear_registro9005(int id) {
    Registro9005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9005(Registro9005 r) {
    return r.valor + r.id;
}
