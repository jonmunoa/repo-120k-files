// fichero 47197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47197;

Registro47197 crear_registro47197(int id) {
    Registro47197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47197(Registro47197 r) {
    return r.valor + r.id;
}
