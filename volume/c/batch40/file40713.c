// fichero 40713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40713;

Registro40713 crear_registro40713(int id) {
    Registro40713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40713(Registro40713 r) {
    return r.valor + r.id;
}
