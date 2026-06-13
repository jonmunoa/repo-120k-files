// fichero 39689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39689;

Registro39689 crear_registro39689(int id) {
    Registro39689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39689(Registro39689 r) {
    return r.valor + r.id;
}
