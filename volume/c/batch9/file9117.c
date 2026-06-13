// fichero 9117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9117;

Registro9117 crear_registro9117(int id) {
    Registro9117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9117(Registro9117 r) {
    return r.valor + r.id;
}
