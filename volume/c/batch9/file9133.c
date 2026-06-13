// fichero 9133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9133;

Registro9133 crear_registro9133(int id) {
    Registro9133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9133(Registro9133 r) {
    return r.valor + r.id;
}
