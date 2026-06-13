// fichero 193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro193;

Registro193 crear_registro193(int id) {
    Registro193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro193(Registro193 r) {
    return r.valor + r.id;
}
