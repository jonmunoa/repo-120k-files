// fichero 40169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40169;

Registro40169 crear_registro40169(int id) {
    Registro40169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40169(Registro40169 r) {
    return r.valor + r.id;
}
