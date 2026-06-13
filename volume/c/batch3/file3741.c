// fichero 3741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3741;

Registro3741 crear_registro3741(int id) {
    Registro3741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3741(Registro3741 r) {
    return r.valor + r.id;
}
