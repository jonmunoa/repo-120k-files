// fichero 16953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16953;

Registro16953 crear_registro16953(int id) {
    Registro16953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16953(Registro16953 r) {
    return r.valor + r.id;
}
