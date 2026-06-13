// fichero 40889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40889;

Registro40889 crear_registro40889(int id) {
    Registro40889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40889(Registro40889 r) {
    return r.valor + r.id;
}
