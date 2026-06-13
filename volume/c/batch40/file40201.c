// fichero 40201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40201;

Registro40201 crear_registro40201(int id) {
    Registro40201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40201(Registro40201 r) {
    return r.valor + r.id;
}
