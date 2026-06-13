// fichero 44113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44113;

Registro44113 crear_registro44113(int id) {
    Registro44113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44113(Registro44113 r) {
    return r.valor + r.id;
}
