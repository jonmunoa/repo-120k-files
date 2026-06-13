// fichero 40841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40841;

Registro40841 crear_registro40841(int id) {
    Registro40841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40841(Registro40841 r) {
    return r.valor + r.id;
}
