// fichero 27865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27865;

Registro27865 crear_registro27865(int id) {
    Registro27865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27865(Registro27865 r) {
    return r.valor + r.id;
}
