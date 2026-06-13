// fichero 29281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29281;

Registro29281 crear_registro29281(int id) {
    Registro29281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29281(Registro29281 r) {
    return r.valor + r.id;
}
