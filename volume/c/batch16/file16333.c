// fichero 16333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16333;

Registro16333 crear_registro16333(int id) {
    Registro16333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16333(Registro16333 r) {
    return r.valor + r.id;
}
