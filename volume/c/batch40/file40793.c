// fichero 40793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40793;

Registro40793 crear_registro40793(int id) {
    Registro40793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40793(Registro40793 r) {
    return r.valor + r.id;
}
