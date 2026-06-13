// fichero 40677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40677;

Registro40677 crear_registro40677(int id) {
    Registro40677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40677(Registro40677 r) {
    return r.valor + r.id;
}
