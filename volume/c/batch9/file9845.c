// fichero 9845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9845;

Registro9845 crear_registro9845(int id) {
    Registro9845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9845(Registro9845 r) {
    return r.valor + r.id;
}
