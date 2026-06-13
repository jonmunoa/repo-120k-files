// fichero 9725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9725;

Registro9725 crear_registro9725(int id) {
    Registro9725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9725(Registro9725 r) {
    return r.valor + r.id;
}
