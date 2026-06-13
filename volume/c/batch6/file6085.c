// fichero 6085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6085;

Registro6085 crear_registro6085(int id) {
    Registro6085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6085(Registro6085 r) {
    return r.valor + r.id;
}
