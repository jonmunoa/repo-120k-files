// fichero 34241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34241;

Registro34241 crear_registro34241(int id) {
    Registro34241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34241(Registro34241 r) {
    return r.valor + r.id;
}
