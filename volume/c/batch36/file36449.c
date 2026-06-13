// fichero 36449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36449;

Registro36449 crear_registro36449(int id) {
    Registro36449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36449(Registro36449 r) {
    return r.valor + r.id;
}
