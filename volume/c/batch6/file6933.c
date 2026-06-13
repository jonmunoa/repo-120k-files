// fichero 6933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6933;

Registro6933 crear_registro6933(int id) {
    Registro6933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6933(Registro6933 r) {
    return r.valor + r.id;
}
