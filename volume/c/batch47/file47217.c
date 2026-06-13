// fichero 47217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47217;

Registro47217 crear_registro47217(int id) {
    Registro47217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47217(Registro47217 r) {
    return r.valor + r.id;
}
