// fichero 45149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45149;

Registro45149 crear_registro45149(int id) {
    Registro45149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45149(Registro45149 r) {
    return r.valor + r.id;
}
