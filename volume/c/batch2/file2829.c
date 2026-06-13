// fichero 2829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2829;

Registro2829 crear_registro2829(int id) {
    Registro2829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2829(Registro2829 r) {
    return r.valor + r.id;
}
