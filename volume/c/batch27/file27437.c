// fichero 27437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27437;

Registro27437 crear_registro27437(int id) {
    Registro27437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27437(Registro27437 r) {
    return r.valor + r.id;
}
