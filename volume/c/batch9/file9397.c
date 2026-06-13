// fichero 9397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9397;

Registro9397 crear_registro9397(int id) {
    Registro9397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9397(Registro9397 r) {
    return r.valor + r.id;
}
