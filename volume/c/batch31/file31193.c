// fichero 31193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31193;

Registro31193 crear_registro31193(int id) {
    Registro31193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31193(Registro31193 r) {
    return r.valor + r.id;
}
