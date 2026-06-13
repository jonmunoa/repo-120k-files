// fichero 23841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23841;

Registro23841 crear_registro23841(int id) {
    Registro23841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23841(Registro23841 r) {
    return r.valor + r.id;
}
