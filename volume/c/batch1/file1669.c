// fichero 1669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1669;

Registro1669 crear_registro1669(int id) {
    Registro1669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1669(Registro1669 r) {
    return r.valor + r.id;
}
