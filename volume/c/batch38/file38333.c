// fichero 38333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38333;

Registro38333 crear_registro38333(int id) {
    Registro38333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38333(Registro38333 r) {
    return r.valor + r.id;
}
