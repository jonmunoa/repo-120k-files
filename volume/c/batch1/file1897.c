// fichero 1897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1897;

Registro1897 crear_registro1897(int id) {
    Registro1897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1897(Registro1897 r) {
    return r.valor + r.id;
}
