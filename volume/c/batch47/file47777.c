// fichero 47777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47777;

Registro47777 crear_registro47777(int id) {
    Registro47777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47777(Registro47777 r) {
    return r.valor + r.id;
}
