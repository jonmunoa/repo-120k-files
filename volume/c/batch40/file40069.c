// fichero 40069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40069;

Registro40069 crear_registro40069(int id) {
    Registro40069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40069(Registro40069 r) {
    return r.valor + r.id;
}
