// fichero 9217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9217;

Registro9217 crear_registro9217(int id) {
    Registro9217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9217(Registro9217 r) {
    return r.valor + r.id;
}
