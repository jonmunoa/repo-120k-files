// fichero 40689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40689;

Registro40689 crear_registro40689(int id) {
    Registro40689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40689(Registro40689 r) {
    return r.valor + r.id;
}
