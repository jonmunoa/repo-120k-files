// fichero 24241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24241;

Registro24241 crear_registro24241(int id) {
    Registro24241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24241(Registro24241 r) {
    return r.valor + r.id;
}
