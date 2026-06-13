// fichero 44313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44313;

Registro44313 crear_registro44313(int id) {
    Registro44313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44313(Registro44313 r) {
    return r.valor + r.id;
}
