// fichero 47753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47753;

Registro47753 crear_registro47753(int id) {
    Registro47753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47753(Registro47753 r) {
    return r.valor + r.id;
}
