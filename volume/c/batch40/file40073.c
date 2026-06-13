// fichero 40073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40073;

Registro40073 crear_registro40073(int id) {
    Registro40073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40073(Registro40073 r) {
    return r.valor + r.id;
}
