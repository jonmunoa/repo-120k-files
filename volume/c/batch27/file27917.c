// fichero 27917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27917;

Registro27917 crear_registro27917(int id) {
    Registro27917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27917(Registro27917 r) {
    return r.valor + r.id;
}
