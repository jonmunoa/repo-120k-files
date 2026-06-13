// fichero 1705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1705;

Registro1705 crear_registro1705(int id) {
    Registro1705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1705(Registro1705 r) {
    return r.valor + r.id;
}
