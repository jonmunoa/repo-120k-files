// fichero 9673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9673;

Registro9673 crear_registro9673(int id) {
    Registro9673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9673(Registro9673 r) {
    return r.valor + r.id;
}
