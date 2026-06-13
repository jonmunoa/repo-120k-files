// fichero 27137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27137;

Registro27137 crear_registro27137(int id) {
    Registro27137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27137(Registro27137 r) {
    return r.valor + r.id;
}
