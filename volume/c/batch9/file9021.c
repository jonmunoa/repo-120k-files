// fichero 9021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9021;

Registro9021 crear_registro9021(int id) {
    Registro9021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9021(Registro9021 r) {
    return r.valor + r.id;
}
