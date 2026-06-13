// fichero 18617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18617;

Registro18617 crear_registro18617(int id) {
    Registro18617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18617(Registro18617 r) {
    return r.valor + r.id;
}
