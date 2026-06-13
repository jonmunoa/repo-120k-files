// fichero 9669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9669;

Registro9669 crear_registro9669(int id) {
    Registro9669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9669(Registro9669 r) {
    return r.valor + r.id;
}
