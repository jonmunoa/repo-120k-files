// fichero 31801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31801;

Registro31801 crear_registro31801(int id) {
    Registro31801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31801(Registro31801 r) {
    return r.valor + r.id;
}
