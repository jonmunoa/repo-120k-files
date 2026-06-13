// fichero 16001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16001;

Registro16001 crear_registro16001(int id) {
    Registro16001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16001(Registro16001 r) {
    return r.valor + r.id;
}
