// fichero 1049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1049;

Registro1049 crear_registro1049(int id) {
    Registro1049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1049(Registro1049 r) {
    return r.valor + r.id;
}
