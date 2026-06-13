// fichero 36177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36177;

Registro36177 crear_registro36177(int id) {
    Registro36177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36177(Registro36177 r) {
    return r.valor + r.id;
}
