// fichero 40997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40997;

Registro40997 crear_registro40997(int id) {
    Registro40997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40997(Registro40997 r) {
    return r.valor + r.id;
}
