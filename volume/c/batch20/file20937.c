// fichero 20937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20937;

Registro20937 crear_registro20937(int id) {
    Registro20937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20937(Registro20937 r) {
    return r.valor + r.id;
}
