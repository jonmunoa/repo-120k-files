// fichero 40789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40789;

Registro40789 crear_registro40789(int id) {
    Registro40789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40789(Registro40789 r) {
    return r.valor + r.id;
}
