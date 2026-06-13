// fichero 18737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18737;

Registro18737 crear_registro18737(int id) {
    Registro18737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18737(Registro18737 r) {
    return r.valor + r.id;
}
