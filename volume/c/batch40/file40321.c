// fichero 40321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40321;

Registro40321 crear_registro40321(int id) {
    Registro40321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40321(Registro40321 r) {
    return r.valor + r.id;
}
