// fichero 40861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40861;

Registro40861 crear_registro40861(int id) {
    Registro40861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40861(Registro40861 r) {
    return r.valor + r.id;
}
