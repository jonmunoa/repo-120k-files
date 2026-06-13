// fichero 44345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44345;

Registro44345 crear_registro44345(int id) {
    Registro44345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44345(Registro44345 r) {
    return r.valor + r.id;
}
