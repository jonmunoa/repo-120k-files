// fichero 45161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45161;

Registro45161 crear_registro45161(int id) {
    Registro45161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45161(Registro45161 r) {
    return r.valor + r.id;
}
