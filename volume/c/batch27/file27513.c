// fichero 27513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27513;

Registro27513 crear_registro27513(int id) {
    Registro27513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27513(Registro27513 r) {
    return r.valor + r.id;
}
