// fichero 20153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20153;

Registro20153 crear_registro20153(int id) {
    Registro20153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20153(Registro20153 r) {
    return r.valor + r.id;
}
