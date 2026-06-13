// fichero 26465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26465;

Registro26465 crear_registro26465(int id) {
    Registro26465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26465(Registro26465 r) {
    return r.valor + r.id;
}
