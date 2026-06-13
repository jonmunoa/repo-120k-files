// fichero 19333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19333;

Registro19333 crear_registro19333(int id) {
    Registro19333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19333(Registro19333 r) {
    return r.valor + r.id;
}
