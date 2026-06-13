// fichero 8753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8753;

Registro8753 crear_registro8753(int id) {
    Registro8753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8753(Registro8753 r) {
    return r.valor + r.id;
}
