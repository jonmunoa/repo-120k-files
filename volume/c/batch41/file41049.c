// fichero 41049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41049;

Registro41049 crear_registro41049(int id) {
    Registro41049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41049(Registro41049 r) {
    return r.valor + r.id;
}
