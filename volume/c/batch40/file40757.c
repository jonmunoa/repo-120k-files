// fichero 40757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40757;

Registro40757 crear_registro40757(int id) {
    Registro40757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40757(Registro40757 r) {
    return r.valor + r.id;
}
