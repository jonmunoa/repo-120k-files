// fichero 16893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16893;

Registro16893 crear_registro16893(int id) {
    Registro16893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16893(Registro16893 r) {
    return r.valor + r.id;
}
