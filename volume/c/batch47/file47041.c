// fichero 47041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47041;

Registro47041 crear_registro47041(int id) {
    Registro47041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47041(Registro47041 r) {
    return r.valor + r.id;
}
