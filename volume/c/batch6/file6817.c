// fichero 6817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6817;

Registro6817 crear_registro6817(int id) {
    Registro6817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6817(Registro6817 r) {
    return r.valor + r.id;
}
