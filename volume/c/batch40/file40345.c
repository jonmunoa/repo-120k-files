// fichero 40345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40345;

Registro40345 crear_registro40345(int id) {
    Registro40345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40345(Registro40345 r) {
    return r.valor + r.id;
}
