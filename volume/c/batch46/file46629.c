// fichero 46629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46629;

Registro46629 crear_registro46629(int id) {
    Registro46629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46629(Registro46629 r) {
    return r.valor + r.id;
}
