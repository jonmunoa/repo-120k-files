// fichero 20193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20193;

Registro20193 crear_registro20193(int id) {
    Registro20193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20193(Registro20193 r) {
    return r.valor + r.id;
}
