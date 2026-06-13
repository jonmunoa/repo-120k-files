// fichero 26145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26145;

Registro26145 crear_registro26145(int id) {
    Registro26145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26145(Registro26145 r) {
    return r.valor + r.id;
}
