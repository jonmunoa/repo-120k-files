// fichero 44585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44585;

Registro44585 crear_registro44585(int id) {
    Registro44585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44585(Registro44585 r) {
    return r.valor + r.id;
}
