// fichero 54041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54041;

Registro54041 crear_registro54041(int id) {
    Registro54041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54041(Registro54041 r) {
    return r.valor + r.id;
}
