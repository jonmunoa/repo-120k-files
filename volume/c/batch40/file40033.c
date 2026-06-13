// fichero 40033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40033;

Registro40033 crear_registro40033(int id) {
    Registro40033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40033(Registro40033 r) {
    return r.valor + r.id;
}
