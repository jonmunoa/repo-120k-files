// fichero 29721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29721;

Registro29721 crear_registro29721(int id) {
    Registro29721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29721(Registro29721 r) {
    return r.valor + r.id;
}
