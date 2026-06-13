// fichero 40661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40661;

Registro40661 crear_registro40661(int id) {
    Registro40661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40661(Registro40661 r) {
    return r.valor + r.id;
}
