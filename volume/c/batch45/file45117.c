// fichero 45117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45117;

Registro45117 crear_registro45117(int id) {
    Registro45117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45117(Registro45117 r) {
    return r.valor + r.id;
}
