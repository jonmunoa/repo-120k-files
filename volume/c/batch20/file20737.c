// fichero 20737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20737;

Registro20737 crear_registro20737(int id) {
    Registro20737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20737(Registro20737 r) {
    return r.valor + r.id;
}
