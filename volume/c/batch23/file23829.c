// fichero 23829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23829;

Registro23829 crear_registro23829(int id) {
    Registro23829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23829(Registro23829 r) {
    return r.valor + r.id;
}
