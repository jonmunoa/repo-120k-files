// fichero 49513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49513;

Registro49513 crear_registro49513(int id) {
    Registro49513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49513(Registro49513 r) {
    return r.valor + r.id;
}
