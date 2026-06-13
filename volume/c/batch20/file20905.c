// fichero 20905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20905;

Registro20905 crear_registro20905(int id) {
    Registro20905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20905(Registro20905 r) {
    return r.valor + r.id;
}
