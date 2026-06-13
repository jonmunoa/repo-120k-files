// fichero 23785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23785;

Registro23785 crear_registro23785(int id) {
    Registro23785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23785(Registro23785 r) {
    return r.valor + r.id;
}
