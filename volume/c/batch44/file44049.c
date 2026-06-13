// fichero 44049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44049;

Registro44049 crear_registro44049(int id) {
    Registro44049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44049(Registro44049 r) {
    return r.valor + r.id;
}
